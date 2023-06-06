/** @file
  UEFI OS based application for fuzzing the SafeIntLib.

**/


#include <PiPei.h>
#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UnitTestLib.h>
#include <Library/SafeIntLib.h>

#define TOTAL_SIZE (512 * 1024)

VOID
FixBuffer (
  UINT8                   *TestBuffer
  )
{
}

UINTN
EFIAPI
GetMaxBufferSize (
  VOID
  )
{
  return TOTAL_SIZE;
}

VOID
TestSafeInt8ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  EFI_STATUS  Status;
  INT8        Operand;
  UINT8       Result;
  
  Status = SafeInt8ToUint8 (TestBuffer, &Result);
  if (TestBuffer == 0) {
    abort();
  }

}

VOID
EFIAPI
RunTestHarness(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  FixBuffer(TestBuffer);
  
  TestSafeInt8ToUint8 (TestBuffer, TestBufferSize);
}
