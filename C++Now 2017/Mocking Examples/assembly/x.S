

.globl _ZTVN10__cxxabiv117__class_type_infoE
.globl _ZTS1X
.globl _ZTI1X
.globl _ZTV1X
.globl _ZN1XD1Ev
.globl _ZN1XD0Ev
.globl _ZN1XC1Ev
.globl _ZN1X4funcEv

.section .rodata
.data
_ZTS1X:
.ascii      "1X\0"

_ZTI1X:
.quad  _ZTVN10__cxxabiv117__class_type_infoE + 0x10
.quad  _ZTS1X

.section .text
.text
_ZN1XD1Ev:
  retq   

_ZN1XD0Ev:
  callq  _ZN1XD1Ev
  mov    $0x10,%esi
  jmp    _ZdlPvm@PLT

_ZN1X4funcEv:
  retq   

.section .rodata
.data
_ZTV1X:
.quad  0
.quad  _ZTI1X
.quad  _ZN1XD1Ev
.quad  _ZN1XD0Ev
.quad  _ZN1X4funcEv

.section .text
.text
_ZN1XC1Ev:
  lea    _ZTV1X(%rip),%rdx
  add    $0x10, %rdx
  mov    %rdx,(%rdi)
  retq   

