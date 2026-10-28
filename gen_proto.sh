#!/bin/bash

# Copyright 2024 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

COMPILED_PROTO_PATH="compiled_proto"

${PROTOC} --cpp_out=${COMPILED_PROTO_PATH} connections/implementation/proto/offline_wire_formats.proto
${PROTOC} --cpp_out=${COMPILED_PROTO_PATH} internal/proto/credential.proto
${PROTOC} --cpp_out=${COMPILED_PROTO_PATH} internal/proto/local_credential.proto
${PROTOC} --cpp_out=${COMPILED_PROTO_PATH} proto/errorcode/error_code_enums.proto
${PROTOC} --cpp_out=${COMPILED_PROTO_PATH} proto/mediums/multiplex_frames.proto
${PROTOC} --cpp_out=${COMPILED_PROTO_PATH} proto/connections_enums.proto
${PROTOC} --cpp_out=${COMPILED_PROTO_PATH} proto/sharing_enums.proto
