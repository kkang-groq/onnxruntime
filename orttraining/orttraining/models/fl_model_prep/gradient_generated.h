// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_GRADIENT_GRADIENT_H_
#define FLATBUFFERS_GENERATED_GRADIENT_GRADIENT_H_

#include "flatbuffers/flatbuffers.h"

namespace gradient {

struct Metadata;

struct Gradient;
struct GradientBuilder;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Metadata FLATBUFFERS_FINAL_CLASS {
 private:
  float version_;
  float factor_;

 public:
  Metadata()
      : version_(0),
        factor_(0) {
  }
  Metadata(float _version, float _factor)
      : version_(flatbuffers::EndianScalar(_version)),
        factor_(flatbuffers::EndianScalar(_factor)) {
  }
  float version() const {
    return flatbuffers::EndianScalar(version_);
  }
  float factor() const {
    return flatbuffers::EndianScalar(factor_);
  }
};
FLATBUFFERS_STRUCT_END(Metadata, 8);

struct Gradient FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef GradientBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_METADATA = 4,
    VT_GRADIENTS = 6
  };
  const gradient::Metadata *metadata() const {
    return GetStruct<const gradient::Metadata *>(VT_METADATA);
  }
  const flatbuffers::Vector<float> *gradients() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_GRADIENTS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<gradient::Metadata>(verifier, VT_METADATA) &&
           VerifyOffset(verifier, VT_GRADIENTS) &&
           verifier.VerifyVector(gradients()) &&
           verifier.EndTable();
  }
};

struct GradientBuilder {
  typedef Gradient Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_metadata(const gradient::Metadata *metadata) {
    fbb_.AddStruct(Gradient::VT_METADATA, metadata);
  }
  void add_gradients(flatbuffers::Offset<flatbuffers::Vector<float>> gradients) {
    fbb_.AddOffset(Gradient::VT_GRADIENTS, gradients);
  }
  explicit GradientBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Gradient> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Gradient>(end);
    return o;
  }
};

inline flatbuffers::Offset<Gradient> CreateGradient(
    flatbuffers::FlatBufferBuilder &_fbb,
    const gradient::Metadata *metadata = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> gradients = 0) {
  GradientBuilder builder_(_fbb);
  builder_.add_gradients(gradients);
  builder_.add_metadata(metadata);
  return builder_.Finish();
}

inline flatbuffers::Offset<Gradient> CreateGradientDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const gradient::Metadata *metadata = 0,
    const std::vector<float> *gradients = nullptr) {
  auto gradients__ = gradients ? _fbb.CreateVector<float>(*gradients) : 0;
  return gradient::CreateGradient(
      _fbb,
      metadata,
      gradients__);
}

inline const gradient::Gradient *GetGradient(const void *buf) {
  return flatbuffers::GetRoot<gradient::Gradient>(buf);
}

inline const gradient::Gradient *GetSizePrefixedGradient(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<gradient::Gradient>(buf);
}

inline bool VerifyGradientBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<gradient::Gradient>(nullptr);
}

inline bool VerifySizePrefixedGradientBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<gradient::Gradient>(nullptr);
}

inline void FinishGradientBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gradient::Gradient> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedGradientBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gradient::Gradient> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace gradient

#endif  // FLATBUFFERS_GENERATED_GRADIENT_GRADIENT_H_