// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CORE_INTERNAL_MEDIUMS_BLE_V2_H_
#define CORE_INTERNAL_MEDIUMS_BLE_V2_H_

#include <cstdint>
#include <string>
#include <utility>

#include "absl/container/flat_hash_map.h"
#include "connections/implementation/mediums/bluetooth_radio.h"
#include "internal/platform/byte_array.h"
#include "internal/platform/mutex.h"

namespace location {
namespace nearby {
namespace connections {

// TODO(b/213691253): Add BleV2 medium tests after more functions are ready.
//  Provides the operations that can be performed on the Bluetooth Low Energy
//  (BLE) medium.
class BleV2 {
 public:
  explicit BleV2(BluetoothRadio& bluetooth_radio);

 private:
  ByteArray CreateAdvertisementHeader() ABSL_SHARED_LOCKS_REQUIRED(mutex_);

  mutable Mutex mutex_;
  BluetoothRadio& radio_ ABSL_GUARDED_BY(mutex_);
  BluetoothAdapter& adapter_ ABSL_GUARDED_BY(mutex_);
  absl::flat_hash_map<int, std::pair<std::string, ByteArray>>
      gatt_advertisements_ ABSL_GUARDED_BY(mutex_);
};

}  // namespace connections
}  // namespace nearby
}  // namespace location

#endif  // CORE_INTERNAL_MEDIUMS_BLE_V2_H_
