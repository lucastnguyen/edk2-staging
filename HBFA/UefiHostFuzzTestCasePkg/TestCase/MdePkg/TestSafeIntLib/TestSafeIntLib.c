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
  EFI_STATUS Status;
  UINT8 *Result;
  Status = SafeInt8ToUint8(TestBuffer, &Result);
}
VOID
TestSafeInt8ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  CHAR8 *Result;
  Status = SafeInt8ToChar8(TestBuffer, &Result);
}
VOID
TestSafeInt8ToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT16 *Result;
  Status = SafeInt8ToUint16(TestBuffer, &Result);
}
VOID
TestSafeInt8ToUint32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT32 *Result;
  Status = SafeInt8ToUint32(TestBuffer, &Result);
}
VOID
TestSafeInt8ToUintn(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINTN *Result;
  Status = SafeInt8ToUintn(TestBuffer, &Result);
}
VOID
TestSafeInt8ToUint64(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT64 *Result;
  Status = SafeInt8ToUint64(TestBuffer, &Result);
}
VOID
TestSafeUint8ToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  INT8 *Result;
  Status = SafeUint8ToInt8(TestBuffer, &Result);
}
VOID
TestSafeUint8ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  CHAR8 *Result;
  Status = SafeUint8ToChar8(TestBuffer, &Result);
}
VOID
TestSafeInt16ToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  INT8 *Result;
  Status = SafeInt16ToInt8(TestBuffer, &Result);
}
VOID
TestSafeInt16ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  CHAR8 *Result;
  Status = SafeInt16ToChar8(TestBuffer, &Result);
}
VOID
TestSafeInt16ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT8 *Result;
  Status = SafeInt16ToUint8(TestBuffer, &Result);
}
VOID
TestSafeInt16ToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT16 *Result;
  Status = SafeInt16ToUint16(TestBuffer, &Result);
}
VOID
TestSafeInt16ToUint32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT32 *Result;
  Status = SafeInt16ToUint32(TestBuffer, &Result);
}
VOID
TestSafeInt16ToUintn(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINTN *Result;
  Status = SafeInt16ToUintn(TestBuffer, &Result);
}
VOID
TestSafeInt16ToUint64(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT64 *Result;
  Status = SafeInt16ToUint64(TestBuffer, &Result);
}
VOID
TestSafeUint16ToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  INT8 *Result;
  Status = SafeUint16ToInt8(TestBuffer, &Result);
}
VOID
TestSafeUint16ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  CHAR8 *Result;
  Status = SafeUint16ToChar8(TestBuffer, &Result);
}
VOID
TestSafeUint16ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT8 *Result;
  Status = SafeUint16ToUint8(TestBuffer, &Result);
}
VOID
TestSafeUint16ToInt16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  INT16 *Result;
  Status = SafeUint16ToInt16(TestBuffer, &Result);
}
VOID
TestSafeInt32ToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  INT8 *Result;
  Status = SafeInt32ToInt8(TestBuffer, &Result);
}
VOID
TestSafeInt32ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  CHAR8 *Result;
  Status = SafeInt32ToChar8(TestBuffer, &Result);
}
VOID
TestSafeInt32ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  UINT8 *Result;
  Status = SafeInt32ToUint8(TestBuffer, &Result);
}
VOID
TestSafeInt32ToInt16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  INT16 *Result;
  Status = SafeInt32ToInt16(TestBuffer, &Result);
}
/*
VOID
TestSafeInt32ToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt32ToUint16(TestBuffer, &Result);
}
VOID
TestSafeInt32ToUint32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt32ToUint32(TestBuffer, &Result);
}
VOID
TestSafeInt32ToUint64(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt32ToUint64(TestBuffer, &Result);
}
VOID
TestSafeUint32ToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint32ToInt8(TestBuffer, &Result);
}
VOID
TestSafeUint32ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint32ToChar8(TestBuffer, &Result);
}
VOID
TestSafeUint32ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint32ToUint8(TestBuffer, &Result);
}
VOID
TestSafeUint32ToInt16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint32ToInt16(TestBuffer, &Result);
}
VOID
TestSafeUint32ToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint32ToUint16(TestBuffer, &Result);
}
VOID
TestSafeUint32ToInt32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint32ToInt32(TestBuffer, &Result);
}
VOID
TestSafeIntnToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeIntnToInt8(TestBuffer, &Result);
}
VOID
TestSafeIntnToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeIntnToChar8(TestBuffer, &Result);
}
VOID
TestSafeIntnToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeIntnToUint8(TestBuffer, &Result);
}
VOID
TestSafeIntnToInt16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeIntnToInt16(TestBuffer, &Result);
}
VOID
TestSafeIntnToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeIntnToUint16(TestBuffer, &Result);
}
VOID
TestSafeIntnToUintn(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeIntnToUintn(TestBuffer, &Result);
}
VOID
TestSafeIntnToUint64(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeIntnToUint64(TestBuffer, &Result);
}
VOID
TestSafeUintnToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUintnToInt8(TestBuffer, &Result);
}
VOID
TestSafeUintnToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUintnToChar8(TestBuffer, &Result);
}
VOID
TestSafeUintnToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUintnToUint8(TestBuffer, &Result);
}
VOID
TestSafeUintnToInt16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUintnToInt16(TestBuffer, &Result);
}
VOID
TestSafeUintnToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUintnToUint16(TestBuffer, &Result);
}
VOID
TestSafeUintnToInt32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUintnToInt32(TestBuffer, &Result);
}
VOID
TestSafeUintnToIntn(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUintnToIntn(TestBuffer, &Result);
}
VOID
TestSafeInt64ToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToInt8(TestBuffer, &Result);
}
VOID
TestSafeInt64ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToChar8(TestBuffer, &Result);
}
VOID
TestSafeInt64ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToUint8(TestBuffer, &Result);
}
VOID
TestSafeInt64ToInt16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToInt16(TestBuffer, &Result);
}
VOID
TestSafeInt64ToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToUint16(TestBuffer, &Result);
}
VOID
TestSafeInt64ToInt32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToInt32(TestBuffer, &Result);
}
VOID
TestSafeInt64ToUint32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToUint32(TestBuffer, &Result);
}
VOID
TestSafeInt64ToUint64(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeInt64ToUint64(TestBuffer, &Result);
}
VOID
TestSafeUint64ToInt8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToInt8(TestBuffer, &Result);
}
VOID
TestSafeUint64ToChar8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToChar8(TestBuffer, &Result);
}
VOID
TestSafeUint64ToUint8(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToUint8(TestBuffer, &Result);
}
VOID
TestSafeUint64ToInt16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToInt16(TestBuffer, &Result);
}
VOID
TestSafeUint64ToUint16(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToUint16(TestBuffer, &Result);
}
VOID
TestSafeUint64ToInt32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToInt32(TestBuffer, &Result);
}
VOID
TestSafeUint64ToUint32(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToUint32(TestBuffer, &Result);
}
VOID
TestSafeUint64ToIntn(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
)
{
  EFI_STATUS Status;
  IN Result;
  Status = SafeUint64ToIntn(TestBuffer, &Result);
}
*/

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
