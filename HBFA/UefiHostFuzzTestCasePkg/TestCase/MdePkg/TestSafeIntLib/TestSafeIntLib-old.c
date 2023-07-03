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
  //INT8        Operand;
  UINT8       Result;
  
  Status = SafeInt8ToUint8 (TestBuffer, &Result);
  if (TestBuffer == 0) {
    abort();
  }

}

VOID
TestSafeInt16ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  EFI_STATUS  Status;
  //INT8        Operand;
  UINT8       Result;
  
  Status = SafeInt16ToUint8 (TestBuffer, &Result);

}

VOID
TestSafeInt32ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  EFI_STATUS  Status;
  //INT8        Operand;
  UINT8       Result;
  
  Status = SafeInt32ToUint8 (TestBuffer, &Result);

}

VOID
TestSafeInt64ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  EFI_STATUS  Status;
  //INT8        Operand;
  UINT8       Result;
  
  Status = SafeInt64ToUint8 (TestBuffer, &Result);

}

VOID 
TestSafeInt64Mult(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  OUT INT64  *Result;
  EFI_STATUS  Status;
  // auto  TestMultiplier = (INT64)TestBuffer;
  // auto  TestMultiplicand = (INT64)TestBuffer;
  INT64 *buff = TestBuffer;
  INT64 TestMultiplier = buff[0];
  INT64 TestMultiplicand = buff[1];
  Status = SafeInt64Mult (TestMultiplicand, TestMultiplier, &Result);
}

VOID
EFIAPI
RunTestHarness(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  // FixBuffer(TestBuffer);
  
  /* 
  //Int Conversion Tests
  TestSafeInt8ToUint8 (TestBuffer, TestBufferSize);
  TestSafeInt16ToUint8 (TestBuffer, TestBufferSize);
  TestSafeInt32ToUint8 (TestBuffer, TestBufferSize);
  TestSafeInt64ToUint8 (TestBuffer, TestBufferSize);
  */
  
  //Int Multiplication Tests
  TestSafeInt64Mult (TestBuffer, TestBufferSize);
  
}
