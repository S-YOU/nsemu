#ifndef _ARMV8_HPP
#define _ARMV8_HPP

namespace ARMv8 {

struct ARMv8State {
  uint64_t gpr[32];  // x0 - x31 (x30 is usually "link regsiter" and x31 is "stack pointer" or "zero register" )
  uint64_t pc;

};

extern ARMv8State arm_state;

#define LR ARMv8::arm_state.gpr[30]
#define SP ARMv8::arm_state.gpr[31]
#define ZERO ARMv8::arm_state.gpr[31]
#define PC ARMv8::arm_state.pc

void Init();

void RunLoop();

}

#endif
