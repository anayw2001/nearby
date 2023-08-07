import 'package:flutter/material.dart';
import 'package:demo/rust.dart';

void main() {
  api.init();
  runApp(const FastPairApp());
}

class FastPairApp extends StatelessWidget {
  const FastPairApp({super.key});

  @override
  Widget build(BuildContext context) => MaterialApp(
        title: 'Fast Pair',
        theme: ThemeData(
          primarySwatch: Colors.blue,
        ),
        home: const HomePage(),
      );
}

class HomePage extends StatelessWidget {
  const HomePage({super.key});

  @override
  Widget build(BuildContext context) => Scaffold(
      appBar: AppBar(title: const Text("Fast Pair")),
      body: Center(
        child: StreamBuilder(
          // Retrieve device info stream from Rust side.
          stream: api.eventStream(),
          builder: (context, deviceInfo) {
            if (deviceInfo.hasData) {
              return Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  crossAxisAlignment: CrossAxisAlignment.center,
                  children: [
                    // `deviceInfo.data[0]` holds device name.
                    // `deviceInfo.data[1]` holds image URL.
                    Expanded(
                        child: Image.network(deviceInfo.data![1],
                            fit: BoxFit.contain)),
                    Text(deviceInfo.data![0]),
                    OutlinedButton(
                      // Invoke pairing dialog.
                      onPressed: () => showDialog<String>(
                          context: context,
                          // Rust functions are invoked as futures.
                          builder: (context) => FutureBuilder(
                              future: api.pair(),
                              builder: (context, pairResult) {
                                return pairResult.hasData
                                    ? AlertDialog(
                                        title: const Text('Pairing result'),
                                        content: Text(pairResult.data!),
                                        actions: <Widget>[
                                          TextButton(
                                            onPressed: () =>
                                                Navigator.pop(context, 'OK'),
                                            child: const Text('OK'),
                                          )
                                        ],
                                      )
                                    : const AlertDialog(
                                        title: Text('Pairing...'),
                                        // Ensures the progress indicator has sensible dimensions,
                                        // otherwise it follows the height/width of the alert dialog.
                                        content: Column(
                                          mainAxisAlignment:
                                              MainAxisAlignment.center,
                                          mainAxisSize: MainAxisSize.min,
                                          children: <Widget>[
                                            SizedBox(
                                              width: 50,
                                              height: 50,
                                              child:
                                                  CircularProgressIndicator(),
                                            ),
                                          ],
                                        ),
                                      );
                              })),
                      child: const Text('Pair'),
                    ),
                  ]);
            }
            return const Center(
              child: CircularProgressIndicator(),
            );
          },
        ),
      ));
}
