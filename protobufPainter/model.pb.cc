// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "model.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* model_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  model_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* model_Color_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_model_2eproto() {
  protobuf_AddDesc_model_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "model.proto");
  GOOGLE_CHECK(file != NULL);
  model_descriptor_ = file->message_type(0);
  static const int model_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(model, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(model, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(model, color_),
  };
  model_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      model_descriptor_,
      model::default_instance_,
      model_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(model, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(model, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(model));
  model_Color_descriptor_ = model_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_model_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    model_descriptor_, &model::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_model_2eproto() {
  delete model::default_instance_;
  delete model_reflection_;
}

void protobuf_AddDesc_model_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013model.proto\"y\n\005model\022\t\n\001X\030\001 \002(\005\022\t\n\001Y\030\002"
    " \002(\005\022\033\n\005color\030\003 \002(\0162\014.model.Color\"=\n\005Col"
    "or\022\t\n\005GREEN\020\001\022\010\n\004BLUE\020\002\022\007\n\003RED\020\003\022\n\n\006PURP"
    "LE\020\004\022\n\n\006YELLOW\020\005", 136);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "model.proto", &protobuf_RegisterTypes);
  model::default_instance_ = new model();
  model::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_model_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_model_2eproto {
  StaticDescriptorInitializer_model_2eproto() {
    protobuf_AddDesc_model_2eproto();
  }
} static_descriptor_initializer_model_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* model_Color_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return model_Color_descriptor_;
}
bool model_Color_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const model_Color model::GREEN;
const model_Color model::BLUE;
const model_Color model::RED;
const model_Color model::PURPLE;
const model_Color model::YELLOW;
const model_Color model::Color_MIN;
const model_Color model::Color_MAX;
const int model::Color_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int model::kXFieldNumber;
const int model::kYFieldNumber;
const int model::kColorFieldNumber;
#endif  // !_MSC_VER

model::model()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:model)
}

void model::InitAsDefaultInstance() {
}

model::model(const model& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:model)
}

void model::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  color_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

model::~model() {
  // @@protoc_insertion_point(destructor:model)
  SharedDtor();
}

void model::SharedDtor() {
  if (this != default_instance_) {
  }
}

void model::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* model::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return model_descriptor_;
}

const model& model::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_model_2eproto();
  return *default_instance_;
}

model* model::default_instance_ = NULL;

model* model::New() const {
  return new model;
}

void model::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<model*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(x_, y_);
    color_ = 1;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool model::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:model)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 X = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_Y;
        break;
      }

      // required int32 Y = 2;
      case 2: {
        if (tag == 16) {
         parse_Y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_color;
        break;
      }

      // required .model.Color color = 3;
      case 3: {
        if (tag == 24) {
         parse_color:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::model_Color_IsValid(value)) {
            set_color(static_cast< ::model_Color >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:model)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:model)
  return false;
#undef DO_
}

void model::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:model)
  // required int32 X = 1;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x(), output);
  }

  // required int32 Y = 2;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y(), output);
  }

  // required .model.Color color = 3;
  if (has_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->color(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:model)
}

::google::protobuf::uint8* model::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:model)
  // required int32 X = 1;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->x(), target);
  }

  // required int32 Y = 2;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->y(), target);
  }

  // required .model.Color color = 3;
  if (has_color()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->color(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:model)
  return target;
}

int model::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 X = 1;
    if (has_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->x());
    }

    // required int32 Y = 2;
    if (has_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->y());
    }

    // required .model.Color color = 3;
    if (has_color()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->color());
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

void model::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const model* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const model*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void model::MergeFrom(const model& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_color()) {
      set_color(from.color());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void model::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void model::CopyFrom(const model& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool model::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void model::Swap(model* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(color_, other->color_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata model::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = model_descriptor_;
  metadata.reflection = model_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)