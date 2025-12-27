// Minimal stub of IIR filter API to build without the external Iir library.
// Provides pass-through filters with matching interface used in the codebase.
#ifndef DOSBOX_STAGING_MINIMAL_IIR_H
#define DOSBOX_STAGING_MINIMAL_IIR_H

namespace Iir {
namespace Butterworth {

// High-pass filter stub. Template parameter 'Order' is unused in this stub.
template <int Order>
class HighPass {
public:
    HighPass() = default;
    // Setup with (sample_rate_hz, cutoff_freq_hz)
    void setup(int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    // Setup with (order, sample_rate_hz, cutoff_freq_hz)
    void setup(int /*order*/, int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    // Filter a single sample (pass-through)
    float filter(float sample) { return sample; }
};

// Low-pass filter stub. Template parameter 'Order' is unused in this stub.
template <int Order>
class LowPass {
public:
    LowPass() = default;
    void setup(int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    void setup(int /*order*/, int /*sample_rate_hz*/, double /*cutoff_freq_hz*/) {}
    float filter(float sample) { return sample; }
};

} // namespace Butterworth
} // namespace Iir

#endif // DOSBOX_STAGING_MINIMAL_IIR_H
