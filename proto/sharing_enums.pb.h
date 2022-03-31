// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/sharing_enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fsharing_5fenums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fsharing_5fenums_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fsharing_5fenums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fsharing_5fenums_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace location {
namespace nearby {
namespace proto {
namespace sharing {

enum EventType : int {
  UNKNOWN_EVENT_TYPE = 0,
  ACCEPT_AGREEMENTS = 1,
  ENABLE_NEARBY_SHARING = 2,
  SET_VISIBILITY = 3,
  DESCRIBE_ATTACHMENTS = 4,
  SCAN_FOR_SHARE_TARGETS_START = 5,
  SCAN_FOR_SHARE_TARGETS_END = 6,
  ADVERTISE_DEVICE_PRESENCE_START = 7,
  ADVERTISE_DEVICE_PRESENCE_END = 8,
  SEND_FAST_INITIALIZATION = 9,
  RECEIVE_FAST_INITIALIZATION = 10,
  DISCOVER_SHARE_TARGET = 11,
  SEND_INTRODUCTION = 12,
  RECEIVE_INTRODUCTION = 13,
  RESPOND_TO_INTRODUCTION = 14,
  SEND_ATTACHMENTS_START = 15,
  SEND_ATTACHMENTS_END = 16,
  RECEIVE_ATTACHMENTS_START = 17,
  RECEIVE_ATTACHMENTS_END = 18,
  CANCEL_SENDING_ATTACHMENTS = 19,
  CANCEL_RECEIVING_ATTACHMENTS = 20,
  OPEN_RECEIVED_ATTACHMENTS = 21,
  LAUNCH_SETUP_ACTIVITY PROTOBUF_DEPRECATED_ENUM = 22,
  ADD_CONTACT = 23,
  REMOVE_CONTACT = 24,
  FAST_SHARE_SERVER_RESPONSE = 25,
  SEND_START = 26,
  ACCEPT_FAST_INITIALIZATION = 27,
  SET_DATA_USAGE = 28,
  DISMISS_FAST_INITIALIZATION = 29,
  CANCEL_CONNECTION = 30,
  LAUNCH_ACTIVITY = 31,
  DISMISS_PRIVACY_NOTIFICATION = 32,
  TAP_PRIVACY_NOTIFICATION = 33,
  TAP_HELP = 34,
  TAP_FEEDBACK = 35,
  ADD_QUICK_SETTINGS_TILE = 36,
  REMOVE_QUICK_SETTINGS_TILE = 37,
  LAUNCH_PHONE_CONSENT = 38,
  TAP_QUICK_SETTINGS_TILE = 39,
  INSTALL_APK = 40,
  VERIFY_APK = 41,
  LAUNCH_CONSENT = 42,
  PROCESS_RECEIVED_ATTACHMENTS_END = 43,
  TOGGLE_SHOW_NOTIFICATION = 44,
  SET_DEVICE_NAME = 45,
  DECLINE_AGREEMENTS = 46,
  REQUEST_SETTING_PERMISSIONS = 47,
  ESTABLISH_CONNECTION = 48,
  DEVICE_SETTINGS = 49
};
bool EventType_IsValid(int value);
constexpr EventType EventType_MIN = UNKNOWN_EVENT_TYPE;
constexpr EventType EventType_MAX = DEVICE_SETTINGS;
constexpr int EventType_ARRAYSIZE = EventType_MAX + 1;

const std::string& EventType_Name(EventType value);
template<typename T>
inline const std::string& EventType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EventType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EventType_Name.");
  return EventType_Name(static_cast<EventType>(enum_t_value));
}
bool EventType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EventType* value);
enum EventCategory : int {
  UNKNOWN_EVENT_CATEGORY = 0,
  SENDING_EVENT = 1,
  RECEIVING_EVENT = 2,
  SETTINGS_EVENT = 3
};
bool EventCategory_IsValid(int value);
constexpr EventCategory EventCategory_MIN = UNKNOWN_EVENT_CATEGORY;
constexpr EventCategory EventCategory_MAX = SETTINGS_EVENT;
constexpr int EventCategory_ARRAYSIZE = EventCategory_MAX + 1;

const std::string& EventCategory_Name(EventCategory value);
template<typename T>
inline const std::string& EventCategory_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EventCategory>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EventCategory_Name.");
  return EventCategory_Name(static_cast<EventCategory>(enum_t_value));
}
bool EventCategory_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EventCategory* value);
enum NearbySharingStatus : int {
  UNKNOWN_NEARBY_SHARING_STATUS = 0,
  ON = 1,
  OFF = 2
};
bool NearbySharingStatus_IsValid(int value);
constexpr NearbySharingStatus NearbySharingStatus_MIN = UNKNOWN_NEARBY_SHARING_STATUS;
constexpr NearbySharingStatus NearbySharingStatus_MAX = OFF;
constexpr int NearbySharingStatus_ARRAYSIZE = NearbySharingStatus_MAX + 1;

const std::string& NearbySharingStatus_Name(NearbySharingStatus value);
template<typename T>
inline const std::string& NearbySharingStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, NearbySharingStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function NearbySharingStatus_Name.");
  return NearbySharingStatus_Name(static_cast<NearbySharingStatus>(enum_t_value));
}
bool NearbySharingStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, NearbySharingStatus* value);
enum Visibility : int {
  UNKNOWN_VISIBILITY = 0,
  CONTACTS_ONLY = 1,
  EVERYONE = 2,
  SELECTED_CONTACTS_ONLY = 3,
  HIDDEN = 4,
  SELF_SHARE = 5
};
bool Visibility_IsValid(int value);
constexpr Visibility Visibility_MIN = UNKNOWN_VISIBILITY;
constexpr Visibility Visibility_MAX = SELF_SHARE;
constexpr int Visibility_ARRAYSIZE = Visibility_MAX + 1;

const std::string& Visibility_Name(Visibility value);
template<typename T>
inline const std::string& Visibility_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Visibility>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Visibility_Name.");
  return Visibility_Name(static_cast<Visibility>(enum_t_value));
}
bool Visibility_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Visibility* value);
enum DataUsage : int {
  UNKNOWN_DATA_USAGE = 0,
  ONLINE = 1,
  WIFI_ONLY = 2,
  OFFLINE = 3
};
bool DataUsage_IsValid(int value);
constexpr DataUsage DataUsage_MIN = UNKNOWN_DATA_USAGE;
constexpr DataUsage DataUsage_MAX = OFFLINE;
constexpr int DataUsage_ARRAYSIZE = DataUsage_MAX + 1;

const std::string& DataUsage_Name(DataUsage value);
template<typename T>
inline const std::string& DataUsage_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataUsage>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataUsage_Name.");
  return DataUsage_Name(static_cast<DataUsage>(enum_t_value));
}
bool DataUsage_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DataUsage* value);
enum EstablishConnectionStatus : int {
  CONNECTION_STATUS_UNKNOWN = 0,
  CONNECTION_STATUS_SUCCESS = 1,
  CONNECTION_STATUS_FAILURE = 2,
  CONNECTION_STATUS_CANCELLATION = 3
};
bool EstablishConnectionStatus_IsValid(int value);
constexpr EstablishConnectionStatus EstablishConnectionStatus_MIN = CONNECTION_STATUS_UNKNOWN;
constexpr EstablishConnectionStatus EstablishConnectionStatus_MAX = CONNECTION_STATUS_CANCELLATION;
constexpr int EstablishConnectionStatus_ARRAYSIZE = EstablishConnectionStatus_MAX + 1;

const std::string& EstablishConnectionStatus_Name(EstablishConnectionStatus value);
template<typename T>
inline const std::string& EstablishConnectionStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EstablishConnectionStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EstablishConnectionStatus_Name.");
  return EstablishConnectionStatus_Name(static_cast<EstablishConnectionStatus>(enum_t_value));
}
bool EstablishConnectionStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EstablishConnectionStatus* value);
enum AttachmentTransmissionStatus : int {
  UNKNOWN_ATTACHMENT_TRANSMISSION_STATUS = 0,
  COMPLETE_ATTACHMENT_TRANSMISSION_STATUS = 1,
  CANCELED_ATTACHMENT_TRANSMISSION_STATUS = 2,
  FAILED_ATTACHMENT_TRANSMISSION_STATUS = 3,
  REJECTED_ATTACHMENT = 4,
  TIMED_OUT_ATTACHMENT = 5,
  AWAITING_REMOTE_ACCEPTANCE_FAILED_ATTACHMENT PROTOBUF_DEPRECATED_ENUM = 6,
  NOT_ENOUGH_SPACE_ATTACHMENT = 7,
  FAILED_NO_TRANSFER_UPDATE_CALLBACK = 8,
  MEDIA_UNAVAILABLE_ATTACHMENT = 9,
  UNSUPPORTED_ATTACHMENT_TYPE_ATTACHMENT = 10,
  NO_ATTACHMENT_FOUND = 11,
  FAILED_NO_SHARE_TARGET_ENDPOINT = 12,
  FAILED_PAIRED_KEYHANDSHAKE = 13,
  FAILED_NULL_CONNECTION = 14,
  FAILED_NO_PAYLOAD = 15,
  FAILED_WRITE_INTRODUCTION = 16,
  FAILED_UNKNOWN_REMOTE_RESPONSE = 17
};
bool AttachmentTransmissionStatus_IsValid(int value);
constexpr AttachmentTransmissionStatus AttachmentTransmissionStatus_MIN = UNKNOWN_ATTACHMENT_TRANSMISSION_STATUS;
constexpr AttachmentTransmissionStatus AttachmentTransmissionStatus_MAX = FAILED_UNKNOWN_REMOTE_RESPONSE;
constexpr int AttachmentTransmissionStatus_ARRAYSIZE = AttachmentTransmissionStatus_MAX + 1;

const std::string& AttachmentTransmissionStatus_Name(AttachmentTransmissionStatus value);
template<typename T>
inline const std::string& AttachmentTransmissionStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AttachmentTransmissionStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AttachmentTransmissionStatus_Name.");
  return AttachmentTransmissionStatus_Name(static_cast<AttachmentTransmissionStatus>(enum_t_value));
}
bool AttachmentTransmissionStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, AttachmentTransmissionStatus* value);
enum ProcessReceivedAttachmentsStatus : int {
  PROCESSING_STATUS_UNKNOWN = 0,
  PROCESSING_STATUS_COMPLETE_PROCESSING_ATTACHMENTS = 1,
  PROCESSING_STATUS_FAILED_MOVING_FILES = 2,
  PROCESSING_STATUS_FAILED_RECEIVING_APK = 3,
  PROCESSING_STATUS_FAILED_RECEIVING_TEXT = 4,
  PROCESSING_STATUS_FAILED_RECEIVING_WIFI_CREDENTIALS = 5
};
bool ProcessReceivedAttachmentsStatus_IsValid(int value);
constexpr ProcessReceivedAttachmentsStatus ProcessReceivedAttachmentsStatus_MIN = PROCESSING_STATUS_UNKNOWN;
constexpr ProcessReceivedAttachmentsStatus ProcessReceivedAttachmentsStatus_MAX = PROCESSING_STATUS_FAILED_RECEIVING_WIFI_CREDENTIALS;
constexpr int ProcessReceivedAttachmentsStatus_ARRAYSIZE = ProcessReceivedAttachmentsStatus_MAX + 1;

const std::string& ProcessReceivedAttachmentsStatus_Name(ProcessReceivedAttachmentsStatus value);
template<typename T>
inline const std::string& ProcessReceivedAttachmentsStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ProcessReceivedAttachmentsStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ProcessReceivedAttachmentsStatus_Name.");
  return ProcessReceivedAttachmentsStatus_Name(static_cast<ProcessReceivedAttachmentsStatus>(enum_t_value));
}
bool ProcessReceivedAttachmentsStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ProcessReceivedAttachmentsStatus* value);
enum SessionStatus : int {
  UNKNOWN_SESSION_STATUS = 0,
  SUCCEEDED_SESSION_STATUS = 1,
  FAILED_SESSION_STATUS = 2
};
bool SessionStatus_IsValid(int value);
constexpr SessionStatus SessionStatus_MIN = UNKNOWN_SESSION_STATUS;
constexpr SessionStatus SessionStatus_MAX = FAILED_SESSION_STATUS;
constexpr int SessionStatus_ARRAYSIZE = SessionStatus_MAX + 1;

const std::string& SessionStatus_Name(SessionStatus value);
template<typename T>
inline const std::string& SessionStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SessionStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SessionStatus_Name.");
  return SessionStatus_Name(static_cast<SessionStatus>(enum_t_value));
}
bool SessionStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SessionStatus* value);
enum ResponseToIntroduction : int {
  UNKNOWN_RESPONSE_TO_INTRODUCTION = 0,
  ACCEPT_INTRODUCTION = 1,
  REJECT_INTRODUCTION = 2,
  FAIL_INTRODUCTION = 3
};
bool ResponseToIntroduction_IsValid(int value);
constexpr ResponseToIntroduction ResponseToIntroduction_MIN = UNKNOWN_RESPONSE_TO_INTRODUCTION;
constexpr ResponseToIntroduction ResponseToIntroduction_MAX = FAIL_INTRODUCTION;
constexpr int ResponseToIntroduction_ARRAYSIZE = ResponseToIntroduction_MAX + 1;

const std::string& ResponseToIntroduction_Name(ResponseToIntroduction value);
template<typename T>
inline const std::string& ResponseToIntroduction_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ResponseToIntroduction>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ResponseToIntroduction_Name.");
  return ResponseToIntroduction_Name(static_cast<ResponseToIntroduction>(enum_t_value));
}
bool ResponseToIntroduction_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ResponseToIntroduction* value);
enum DeviceType : int {
  UNKNOWN_DEVICE_TYPE = 0,
  PHONE = 1,
  TABLET = 2,
  LAPTOP = 3
};
bool DeviceType_IsValid(int value);
constexpr DeviceType DeviceType_MIN = UNKNOWN_DEVICE_TYPE;
constexpr DeviceType DeviceType_MAX = LAPTOP;
constexpr int DeviceType_ARRAYSIZE = DeviceType_MAX + 1;

const std::string& DeviceType_Name(DeviceType value);
template<typename T>
inline const std::string& DeviceType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DeviceType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DeviceType_Name.");
  return DeviceType_Name(static_cast<DeviceType>(enum_t_value));
}
bool DeviceType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DeviceType* value);
enum OSType : int {
  UNKNOWN_OS_TYPE = 0,
  ANDROID = 1,
  CHROME_OS = 2,
  IOS = 3
};
bool OSType_IsValid(int value);
constexpr OSType OSType_MIN = UNKNOWN_OS_TYPE;
constexpr OSType OSType_MAX = IOS;
constexpr int OSType_ARRAYSIZE = OSType_MAX + 1;

const std::string& OSType_Name(OSType value);
template<typename T>
inline const std::string& OSType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, OSType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function OSType_Name.");
  return OSType_Name(static_cast<OSType>(enum_t_value));
}
bool OSType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, OSType* value);
enum DeviceRelationship : int {
  UNKNOWN_DEVICE_RELATIONSHIP = 0,
  IS_SELF = 1,
  IS_CONTACT = 2,
  IS_STRANGER = 3
};
bool DeviceRelationship_IsValid(int value);
constexpr DeviceRelationship DeviceRelationship_MIN = UNKNOWN_DEVICE_RELATIONSHIP;
constexpr DeviceRelationship DeviceRelationship_MAX = IS_STRANGER;
constexpr int DeviceRelationship_ARRAYSIZE = DeviceRelationship_MAX + 1;

const std::string& DeviceRelationship_Name(DeviceRelationship value);
template<typename T>
inline const std::string& DeviceRelationship_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DeviceRelationship>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DeviceRelationship_Name.");
  return DeviceRelationship_Name(static_cast<DeviceRelationship>(enum_t_value));
}
bool DeviceRelationship_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DeviceRelationship* value);
enum LogSource : int {
  UNSPECIFIED_SOURCE = 0,
  LAB_DEVICES = 1,
  INTERNAL_DEVICES = 2,
  BETA_TESTER_DEVICES = 3,
  OEM_DEVICES = 4,
  DEBUG_DEVICES = 5
};
bool LogSource_IsValid(int value);
constexpr LogSource LogSource_MIN = UNSPECIFIED_SOURCE;
constexpr LogSource LogSource_MAX = DEBUG_DEVICES;
constexpr int LogSource_ARRAYSIZE = LogSource_MAX + 1;

const std::string& LogSource_Name(LogSource value);
template<typename T>
inline const std::string& LogSource_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LogSource>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LogSource_Name.");
  return LogSource_Name(static_cast<LogSource>(enum_t_value));
}
bool LogSource_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, LogSource* value);
enum ServerActionName : int {
  UNKNOWN_SERVER_ACTION = 0,
  UPLOAD_CERTIFICATES = 1,
  DOWNLOAD_CERTIFICATES = 2,
  CHECK_REACHABILITY = 3,
  UPLOAD_CONTACTS = 4,
  UPDATE_DEVICE_NAME = 5,
  UPLOAD_SENDER_CERTIFICATES = 6,
  DOWNLOAD_SENDER_CERTIFICATES = 7
};
bool ServerActionName_IsValid(int value);
constexpr ServerActionName ServerActionName_MIN = UNKNOWN_SERVER_ACTION;
constexpr ServerActionName ServerActionName_MAX = DOWNLOAD_SENDER_CERTIFICATES;
constexpr int ServerActionName_ARRAYSIZE = ServerActionName_MAX + 1;

const std::string& ServerActionName_Name(ServerActionName value);
template<typename T>
inline const std::string& ServerActionName_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ServerActionName>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ServerActionName_Name.");
  return ServerActionName_Name(static_cast<ServerActionName>(enum_t_value));
}
bool ServerActionName_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ServerActionName* value);
enum ServerResponseState : int {
  UNKNOWN_SERVER_RESPONSE_STATE = 0,
  SERVER_RESPONSE_SUCCESS = 1,
  SERVER_RESPONSE_UNKNOWN_FAILURE = 2,
  SERVER_RESPONSE_STATUS_OTHER_FAILURE = 3,
  SERVER_RESPONSE_STATUS_DEADLINE_EXCEEDED = 4,
  SERVER_RESPONSE_STATUS_PERMISSION_DENIED = 5,
  SERVER_RESPONSE_STATUS_UNAVAILABLE = 6,
  SERVER_RESPONSE_STATUS_UNAUTHENTICATED = 7,
  SERVER_RESPONSE_STATUS_INVALID_ARGUMENT = 9,
  SERVER_RESPONSE_GOOGLE_AUTH_FAILURE = 8
};
bool ServerResponseState_IsValid(int value);
constexpr ServerResponseState ServerResponseState_MIN = UNKNOWN_SERVER_RESPONSE_STATE;
constexpr ServerResponseState ServerResponseState_MAX = SERVER_RESPONSE_STATUS_INVALID_ARGUMENT;
constexpr int ServerResponseState_ARRAYSIZE = ServerResponseState_MAX + 1;

const std::string& ServerResponseState_Name(ServerResponseState value);
template<typename T>
inline const std::string& ServerResponseState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ServerResponseState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ServerResponseState_Name.");
  return ServerResponseState_Name(static_cast<ServerResponseState>(enum_t_value));
}
bool ServerResponseState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ServerResponseState* value);
enum ScanType : int {
  UNKNOWN_SCAN_TYPE = 0,
  FOREGROUND_SCAN = 1,
  FOREGROUND_RETRY_SCAN = 2,
  DIRECT_SHARE_SCAN = 3
};
bool ScanType_IsValid(int value);
constexpr ScanType ScanType_MIN = UNKNOWN_SCAN_TYPE;
constexpr ScanType ScanType_MAX = DIRECT_SHARE_SCAN;
constexpr int ScanType_ARRAYSIZE = ScanType_MAX + 1;

const std::string& ScanType_Name(ScanType value);
template<typename T>
inline const std::string& ScanType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ScanType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ScanType_Name.");
  return ScanType_Name(static_cast<ScanType>(enum_t_value));
}
bool ScanType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ScanType* value);
enum ActivityName : int {
  UNKNOWN_ACTIVITY = 0,
  SHARE_SHEET_ACTIVITY = 1,
  SETTINGS_ACTIVITY = 2,
  RECEIVE_SURFACE_ACTIVITY = 3,
  SETUP_ACTIVITY = 4,
  DEVICE_VISIBILITY_ACTIVITY = 5,
  CONSENTS_ACTIVITY = 6,
  SET_DEVICE_NAME_DIALOG = 7,
  SET_DATA_USAGE_DIALOG = 8
};
bool ActivityName_IsValid(int value);
constexpr ActivityName ActivityName_MIN = UNKNOWN_ACTIVITY;
constexpr ActivityName ActivityName_MAX = SET_DATA_USAGE_DIALOG;
constexpr int ActivityName_ARRAYSIZE = ActivityName_MAX + 1;

const std::string& ActivityName_Name(ActivityName value);
template<typename T>
inline const std::string& ActivityName_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ActivityName>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ActivityName_Name.");
  return ActivityName_Name(static_cast<ActivityName>(enum_t_value));
}
bool ActivityName_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ActivityName* value);
enum ConsentType : int {
  CONSENT_TYPE_UNKNOWN = 0,
  CONSENT_TYPE_C11N = 1,
  CONSENT_TYPE_DEVICE_CONTACT = 2
};
bool ConsentType_IsValid(int value);
constexpr ConsentType ConsentType_MIN = CONSENT_TYPE_UNKNOWN;
constexpr ConsentType ConsentType_MAX = CONSENT_TYPE_DEVICE_CONTACT;
constexpr int ConsentType_ARRAYSIZE = ConsentType_MAX + 1;

const std::string& ConsentType_Name(ConsentType value);
template<typename T>
inline const std::string& ConsentType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ConsentType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ConsentType_Name.");
  return ConsentType_Name(static_cast<ConsentType>(enum_t_value));
}
bool ConsentType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ConsentType* value);
enum ConsentAcceptanceStatus : int {
  CONSENT_UNKNOWN_ACCEPT_STATUS = 0,
  CONSENT_ACCEPTED = 1,
  CONSENT_DECLINED = 2,
  CONSENT_UNABLE_TO_ENABLE = 3
};
bool ConsentAcceptanceStatus_IsValid(int value);
constexpr ConsentAcceptanceStatus ConsentAcceptanceStatus_MIN = CONSENT_UNKNOWN_ACCEPT_STATUS;
constexpr ConsentAcceptanceStatus ConsentAcceptanceStatus_MAX = CONSENT_UNABLE_TO_ENABLE;
constexpr int ConsentAcceptanceStatus_ARRAYSIZE = ConsentAcceptanceStatus_MAX + 1;

const std::string& ConsentAcceptanceStatus_Name(ConsentAcceptanceStatus value);
template<typename T>
inline const std::string& ConsentAcceptanceStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ConsentAcceptanceStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ConsentAcceptanceStatus_Name.");
  return ConsentAcceptanceStatus_Name(static_cast<ConsentAcceptanceStatus>(enum_t_value));
}
bool ConsentAcceptanceStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ConsentAcceptanceStatus* value);
enum ApkSource : int {
  UNKNOWN_APK_SOURCE = 0,
  APK_FROM_SD_CARD = 1,
  INSTALLED_APP = 2
};
bool ApkSource_IsValid(int value);
constexpr ApkSource ApkSource_MIN = UNKNOWN_APK_SOURCE;
constexpr ApkSource ApkSource_MAX = INSTALLED_APP;
constexpr int ApkSource_ARRAYSIZE = ApkSource_MAX + 1;

const std::string& ApkSource_Name(ApkSource value);
template<typename T>
inline const std::string& ApkSource_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ApkSource>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ApkSource_Name.");
  return ApkSource_Name(static_cast<ApkSource>(enum_t_value));
}
bool ApkSource_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ApkSource* value);
enum InstallAPKStatus : int {
  UNKNOWN_INSTALL_APK_STATUS = 0,
  FAIL_INSTALLATION = 1,
  SUCCESS_INSTALLATION = 2
};
bool InstallAPKStatus_IsValid(int value);
constexpr InstallAPKStatus InstallAPKStatus_MIN = UNKNOWN_INSTALL_APK_STATUS;
constexpr InstallAPKStatus InstallAPKStatus_MAX = SUCCESS_INSTALLATION;
constexpr int InstallAPKStatus_ARRAYSIZE = InstallAPKStatus_MAX + 1;

const std::string& InstallAPKStatus_Name(InstallAPKStatus value);
template<typename T>
inline const std::string& InstallAPKStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, InstallAPKStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function InstallAPKStatus_Name.");
  return InstallAPKStatus_Name(static_cast<InstallAPKStatus>(enum_t_value));
}
bool InstallAPKStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, InstallAPKStatus* value);
enum VerifyAPKStatus : int {
  UNKNOWN_VERIFY_APK_STATUS = 0,
  NOT_INSTALLABLE = 1,
  INSTALLABLE = 2,
  ALREADY_INSTALLED = 3
};
bool VerifyAPKStatus_IsValid(int value);
constexpr VerifyAPKStatus VerifyAPKStatus_MIN = UNKNOWN_VERIFY_APK_STATUS;
constexpr VerifyAPKStatus VerifyAPKStatus_MAX = ALREADY_INSTALLED;
constexpr int VerifyAPKStatus_ARRAYSIZE = VerifyAPKStatus_MAX + 1;

const std::string& VerifyAPKStatus_Name(VerifyAPKStatus value);
template<typename T>
inline const std::string& VerifyAPKStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, VerifyAPKStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function VerifyAPKStatus_Name.");
  return VerifyAPKStatus_Name(static_cast<VerifyAPKStatus>(enum_t_value));
}
bool VerifyAPKStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, VerifyAPKStatus* value);
enum ShowNotificationStatus : int {
  UNKNOWN_SHOW_NOTIFICATION_STATUS = 0,
  SHOW = 1,
  NOT_SHOW = 2
};
bool ShowNotificationStatus_IsValid(int value);
constexpr ShowNotificationStatus ShowNotificationStatus_MIN = UNKNOWN_SHOW_NOTIFICATION_STATUS;
constexpr ShowNotificationStatus ShowNotificationStatus_MAX = NOT_SHOW;
constexpr int ShowNotificationStatus_ARRAYSIZE = ShowNotificationStatus_MAX + 1;

const std::string& ShowNotificationStatus_Name(ShowNotificationStatus value);
template<typename T>
inline const std::string& ShowNotificationStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ShowNotificationStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ShowNotificationStatus_Name.");
  return ShowNotificationStatus_Name(static_cast<ShowNotificationStatus>(enum_t_value));
}
bool ShowNotificationStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ShowNotificationStatus* value);
enum PermissionRequestResult : int {
  PERMISSION_UNKNOWN_REQUEST_RESULT = 0,
  PERMISSION_GRANTED = 1,
  PERMISSION_REJECTED = 2,
  PERMISSION_UNABLE_TO_GRANT = 3
};
bool PermissionRequestResult_IsValid(int value);
constexpr PermissionRequestResult PermissionRequestResult_MIN = PERMISSION_UNKNOWN_REQUEST_RESULT;
constexpr PermissionRequestResult PermissionRequestResult_MAX = PERMISSION_UNABLE_TO_GRANT;
constexpr int PermissionRequestResult_ARRAYSIZE = PermissionRequestResult_MAX + 1;

const std::string& PermissionRequestResult_Name(PermissionRequestResult value);
template<typename T>
inline const std::string& PermissionRequestResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PermissionRequestResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PermissionRequestResult_Name.");
  return PermissionRequestResult_Name(static_cast<PermissionRequestResult>(enum_t_value));
}
bool PermissionRequestResult_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PermissionRequestResult* value);
enum PermissionRequestType : int {
  PERMISSION_UNKNOWN_TYPE = 0,
  PERMISSION_AIRPLANE_MODE_OFF = 1,
  PERMISSION_WIFI = 2,
  PERMISSION_BLUETOOTH = 3,
  PERMISSION_LOCATION = 4
};
bool PermissionRequestType_IsValid(int value);
constexpr PermissionRequestType PermissionRequestType_MIN = PERMISSION_UNKNOWN_TYPE;
constexpr PermissionRequestType PermissionRequestType_MAX = PERMISSION_LOCATION;
constexpr int PermissionRequestType_ARRAYSIZE = PermissionRequestType_MAX + 1;

const std::string& PermissionRequestType_Name(PermissionRequestType value);
template<typename T>
inline const std::string& PermissionRequestType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PermissionRequestType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PermissionRequestType_Name.");
  return PermissionRequestType_Name(static_cast<PermissionRequestType>(enum_t_value));
}
bool PermissionRequestType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PermissionRequestType* value);
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace sharing
}  // namespace proto
}  // namespace nearby
}  // namespace location

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::location::nearby::proto::sharing::EventType> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::EventCategory> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::NearbySharingStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::Visibility> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::DataUsage> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::EstablishConnectionStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::AttachmentTransmissionStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ProcessReceivedAttachmentsStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::SessionStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ResponseToIntroduction> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::DeviceType> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::OSType> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::DeviceRelationship> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::LogSource> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ServerActionName> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ServerResponseState> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ScanType> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ActivityName> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ConsentType> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ConsentAcceptanceStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ApkSource> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::InstallAPKStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::VerifyAPKStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::ShowNotificationStatus> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::PermissionRequestResult> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::proto::sharing::PermissionRequestType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fsharing_5fenums_2eproto
