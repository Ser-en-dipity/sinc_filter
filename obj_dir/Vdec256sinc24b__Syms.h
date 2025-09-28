// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDEC256SINC24B__SYMS_H_
#define VERILATED_VDEC256SINC24B__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdec256sinc24b.h"

// INCLUDE MODULE CLASSES
#include "Vdec256sinc24b___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdec256sinc24b__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdec256sinc24b* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdec256sinc24b___024root       TOP;

    // CONSTRUCTORS
    Vdec256sinc24b__Syms(VerilatedContext* contextp, const char* namep, Vdec256sinc24b* modelp);
    ~Vdec256sinc24b__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
