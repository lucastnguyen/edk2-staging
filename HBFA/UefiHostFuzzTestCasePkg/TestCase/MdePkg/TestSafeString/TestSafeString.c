/** @file
  UEFI OS based application for fuzzing the SafeString module.

**/


#include <PiPei.h>
#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UnitTestLib.h>
#include <Library/BaseLib.h>
// #include <Library/BaseLib/BaseLibInternals.h>
// #include <Library/BaseLib/SafeString.c>

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
TestAsciiStrHexToBytes(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{

  UINT8   Buffer;
  //UINTN   MaxBufferSize;

  EFI_STATUS Status;
  Status = AsciiStrHexToBytes(TestBuffer, TestBufferSize, Buffer, TOTAL_SIZE);
}

VOID
EFIAPI
RunTestHarness(
  IN VOID  *TestBuffer,
  IN UINTN TestBufferSize
  )
{
  // FixBuffer(TestBuffer);
  TestAsciiStrHexToBytes(TestBuffer, TestBufferSize);

}
