// Minimal stub of IIR filter API to build without the external Iir library.
#ifndef DOSBOX_STAGING_MINIMAL_IIR_H
#define DOSBOX_STAGING_MINIMAL_IIR_H

namespace Iir {
namespace Butterworth {

template <int Order>
class HighPass {
public:
    void setup(int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    void setup(int /*order*/, int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    float filter(float sample) { return sample; }
};

template <int Order>
class LowPass {
public:
    void setup(int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    void setup(int /*order*/, int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    float filter(float sample) { return sample; }
};

} // namespace Butterworth
} // namespace Iir

#endif // DOSBOX_STAGING_MINIMAL_IIR_H
