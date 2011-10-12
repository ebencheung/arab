// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "arab/types.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Arab {

namespace {

const ::google::protobuf::Descriptor* ErrorCode_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ErrorCode_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ErrorCode_Code_descriptor_ = NULL;
const ::google::protobuf::Descriptor* TunnelMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TunnelMsg_reflection_ = NULL;
const ::google::protobuf::Descriptor* ErrResp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ErrResp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_arab_2ftypes_2eproto() {
  protobuf_AddDesc_arab_2ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "arab/types.proto");
  GOOGLE_CHECK(file != NULL);
  ErrorCode_descriptor_ = file->message_type(0);
  static const int ErrorCode_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorCode, error_code_),
  };
  ErrorCode_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ErrorCode_descriptor_,
      ErrorCode::default_instance_,
      ErrorCode_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorCode, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorCode, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ErrorCode));
  ErrorCode_Code_descriptor_ = ErrorCode_descriptor_->enum_type(0);
  TunnelMsg_descriptor_ = file->message_type(1);
  static const int TunnelMsg_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TunnelMsg, error_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TunnelMsg, message_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TunnelMsg, message_content_),
  };
  TunnelMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TunnelMsg_descriptor_,
      TunnelMsg::default_instance_,
      TunnelMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TunnelMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TunnelMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TunnelMsg));
  ErrResp_descriptor_ = file->message_type(2);
  static const int ErrResp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrResp, error_),
  };
  ErrResp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ErrResp_descriptor_,
      ErrResp::default_instance_,
      ErrResp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrResp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrResp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ErrResp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_arab_2ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ErrorCode_descriptor_, &ErrorCode::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TunnelMsg_descriptor_, &TunnelMsg::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ErrResp_descriptor_, &ErrResp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_arab_2ftypes_2eproto() {
  delete ErrorCode::default_instance_;
  delete ErrorCode_reflection_;
  delete TunnelMsg::default_instance_;
  delete TunnelMsg_reflection_;
  delete ErrResp::default_instance_;
  delete ErrResp_reflection_;
}

void protobuf_AddDesc_arab_2ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020arab/types.proto\022\004Arab\"e\n\tErrorCode\022,\n"
    "\nerror_code\030\001 \002(\0162\024.Arab.ErrorCode.Code:"
    "\002OK\"*\n\004Code\022\006\n\002OK\020\000\022\014\n\010TIME_OUT\020\001\022\014\n\010NOT"
    "_IMPL\020\002\"Z\n\tTunnelMsg\022\036\n\005error\030\001 \002(\0132\017.Ar"
    "ab.ErrorCode\022\024\n\014message_type\030\002 \002(\t\022\027\n\017me"
    "ssage_content\030\003 \001(\014\")\n\007ErrResp\022\036\n\005error\030"
    "\001 \002(\0132\017.Arab.ErrorCode", 262);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "arab/types.proto", &protobuf_RegisterTypes);
  ErrorCode::default_instance_ = new ErrorCode();
  TunnelMsg::default_instance_ = new TunnelMsg();
  ErrResp::default_instance_ = new ErrResp();
  ErrorCode::default_instance_->InitAsDefaultInstance();
  TunnelMsg::default_instance_->InitAsDefaultInstance();
  ErrResp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_arab_2ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_arab_2ftypes_2eproto {
  StaticDescriptorInitializer_arab_2ftypes_2eproto() {
    protobuf_AddDesc_arab_2ftypes_2eproto();
  }
} static_descriptor_initializer_arab_2ftypes_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* ErrorCode_Code_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ErrorCode_Code_descriptor_;
}
bool ErrorCode_Code_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const ErrorCode_Code ErrorCode::OK;
const ErrorCode_Code ErrorCode::TIME_OUT;
const ErrorCode_Code ErrorCode::NOT_IMPL;
const ErrorCode_Code ErrorCode::Code_MIN;
const ErrorCode_Code ErrorCode::Code_MAX;
const int ErrorCode::Code_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int ErrorCode::kErrorCodeFieldNumber;
#endif  // !_MSC_VER

ErrorCode::ErrorCode()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ErrorCode::InitAsDefaultInstance() {
}

ErrorCode::ErrorCode(const ErrorCode& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ErrorCode::SharedCtor() {
  _cached_size_ = 0;
  error_code_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ErrorCode::~ErrorCode() {
  SharedDtor();
}

void ErrorCode::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ErrorCode::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ErrorCode::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ErrorCode_descriptor_;
}

const ErrorCode& ErrorCode::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_arab_2ftypes_2eproto();  return *default_instance_;
}

ErrorCode* ErrorCode::default_instance_ = NULL;

ErrorCode* ErrorCode::New() const {
  return new ErrorCode;
}

void ErrorCode::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    error_code_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ErrorCode::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Arab.ErrorCode.Code error_code = 1 [default = OK];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Arab::ErrorCode_Code_IsValid(value)) {
            set_error_code(static_cast< ::Arab::ErrorCode_Code >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ErrorCode::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .Arab.ErrorCode.Code error_code = 1 [default = OK];
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->error_code(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ErrorCode::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .Arab.ErrorCode.Code error_code = 1 [default = OK];
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->error_code(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ErrorCode::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .Arab.ErrorCode.Code error_code = 1 [default = OK];
    if (has_error_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->error_code());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ErrorCode::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ErrorCode* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ErrorCode*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ErrorCode::MergeFrom(const ErrorCode& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ErrorCode::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ErrorCode::CopyFrom(const ErrorCode& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ErrorCode::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void ErrorCode::Swap(ErrorCode* other) {
  if (other != this) {
    std::swap(error_code_, other->error_code_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ErrorCode::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ErrorCode_descriptor_;
  metadata.reflection = ErrorCode_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TunnelMsg::kErrorFieldNumber;
const int TunnelMsg::kMessageTypeFieldNumber;
const int TunnelMsg::kMessageContentFieldNumber;
#endif  // !_MSC_VER

TunnelMsg::TunnelMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TunnelMsg::InitAsDefaultInstance() {
  error_ = const_cast< ::Arab::ErrorCode*>(&::Arab::ErrorCode::default_instance());
}

TunnelMsg::TunnelMsg(const TunnelMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TunnelMsg::SharedCtor() {
  _cached_size_ = 0;
  error_ = NULL;
  message_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  message_content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TunnelMsg::~TunnelMsg() {
  SharedDtor();
}

void TunnelMsg::SharedDtor() {
  if (message_type_ != &::google::protobuf::internal::kEmptyString) {
    delete message_type_;
  }
  if (message_content_ != &::google::protobuf::internal::kEmptyString) {
    delete message_content_;
  }
  if (this != default_instance_) {
    delete error_;
  }
}

void TunnelMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TunnelMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TunnelMsg_descriptor_;
}

const TunnelMsg& TunnelMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_arab_2ftypes_2eproto();  return *default_instance_;
}

TunnelMsg* TunnelMsg::default_instance_ = NULL;

TunnelMsg* TunnelMsg::New() const {
  return new TunnelMsg;
}

void TunnelMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_error()) {
      if (error_ != NULL) error_->::Arab::ErrorCode::Clear();
    }
    if (has_message_type()) {
      if (message_type_ != &::google::protobuf::internal::kEmptyString) {
        message_type_->clear();
      }
    }
    if (has_message_content()) {
      if (message_content_ != &::google::protobuf::internal::kEmptyString) {
        message_content_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TunnelMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Arab.ErrorCode error = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_error()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_message_type;
        break;
      }
      
      // required string message_type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message_type().data(), this->message_type().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_message_content;
        break;
      }
      
      // optional bytes message_content = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_message_content()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TunnelMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .Arab.ErrorCode error = 1;
  if (has_error()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->error(), output);
  }
  
  // required string message_type = 2;
  if (has_message_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message_type().data(), this->message_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->message_type(), output);
  }
  
  // optional bytes message_content = 3;
  if (has_message_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->message_content(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TunnelMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .Arab.ErrorCode error = 1;
  if (has_error()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->error(), target);
  }
  
  // required string message_type = 2;
  if (has_message_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message_type().data(), this->message_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->message_type(), target);
  }
  
  // optional bytes message_content = 3;
  if (has_message_content()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->message_content(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TunnelMsg::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .Arab.ErrorCode error = 1;
    if (has_error()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->error());
    }
    
    // required string message_type = 2;
    if (has_message_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message_type());
    }
    
    // optional bytes message_content = 3;
    if (has_message_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->message_content());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TunnelMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TunnelMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TunnelMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TunnelMsg::MergeFrom(const TunnelMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error()) {
      mutable_error()->::Arab::ErrorCode::MergeFrom(from.error());
    }
    if (from.has_message_type()) {
      set_message_type(from.message_type());
    }
    if (from.has_message_content()) {
      set_message_content(from.message_content());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TunnelMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TunnelMsg::CopyFrom(const TunnelMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TunnelMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  if (has_error()) {
    if (!this->error().IsInitialized()) return false;
  }
  return true;
}

void TunnelMsg::Swap(TunnelMsg* other) {
  if (other != this) {
    std::swap(error_, other->error_);
    std::swap(message_type_, other->message_type_);
    std::swap(message_content_, other->message_content_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TunnelMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TunnelMsg_descriptor_;
  metadata.reflection = TunnelMsg_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ErrResp::kErrorFieldNumber;
#endif  // !_MSC_VER

ErrResp::ErrResp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ErrResp::InitAsDefaultInstance() {
  error_ = const_cast< ::Arab::ErrorCode*>(&::Arab::ErrorCode::default_instance());
}

ErrResp::ErrResp(const ErrResp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ErrResp::SharedCtor() {
  _cached_size_ = 0;
  error_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ErrResp::~ErrResp() {
  SharedDtor();
}

void ErrResp::SharedDtor() {
  if (this != default_instance_) {
    delete error_;
  }
}

void ErrResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ErrResp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ErrResp_descriptor_;
}

const ErrResp& ErrResp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_arab_2ftypes_2eproto();  return *default_instance_;
}

ErrResp* ErrResp::default_instance_ = NULL;

ErrResp* ErrResp::New() const {
  return new ErrResp;
}

void ErrResp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_error()) {
      if (error_ != NULL) error_->::Arab::ErrorCode::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ErrResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Arab.ErrorCode error = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_error()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ErrResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .Arab.ErrorCode error = 1;
  if (has_error()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->error(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ErrResp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .Arab.ErrorCode error = 1;
  if (has_error()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->error(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ErrResp::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .Arab.ErrorCode error = 1;
    if (has_error()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->error());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ErrResp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ErrResp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ErrResp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ErrResp::MergeFrom(const ErrResp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error()) {
      mutable_error()->::Arab::ErrorCode::MergeFrom(from.error());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ErrResp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ErrResp::CopyFrom(const ErrResp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ErrResp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  if (has_error()) {
    if (!this->error().IsInitialized()) return false;
  }
  return true;
}

void ErrResp::Swap(ErrResp* other) {
  if (other != this) {
    std::swap(error_, other->error_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ErrResp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ErrResp_descriptor_;
  metadata.reflection = ErrResp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Arab

// @@protoc_insertion_point(global_scope)