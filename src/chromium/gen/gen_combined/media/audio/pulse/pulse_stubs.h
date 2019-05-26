// This is generated file. Do not modify directly.

#ifndef MEDIA_AUDIO_PULSE_
#define MEDIA_AUDIO_PULSE_

#include <stdarg.h>
#include <map>
#include <string>
#include <vector>

#include "base/logging.h"

namespace media_audio_pulse {
// Individual module initializer functions.
bool IsPulseInitialized();
void InitializePulse(void* module);
void UninitializePulse();

// Enum and typedef for umbrella initializer.
enum StubModules {
  kModulePulse = 0,
  kNumStubModules
};

typedef std::map<StubModules, std::vector<std::string> > StubPathMap;

// Umbrella initializer for all the modules in this stub file.
bool InitializeStubs(const StubPathMap& path_map);
}  // namespace media_audio_pulse

#endif  // MEDIA_AUDIO_PULSE_
