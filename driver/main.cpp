#include <ntddk.h>

/*
 *
 */
void UnloadDriver
(
	_In_ PDRIVER_OBJECT DriverObject
)
{
	UNREFERENCED_PARAMETER(DriverObject);

	KdPrint(("Unload called\n"));
}

/*
 *
 */
extern "C" NTSTATUS
DriverEntry
(
	PDRIVER_OBJECT DriverObject,
	_In_ PUNICODE_STRING RegistryPath
)
{
	UNREFERENCED_PARAMETER(RegistryPath);

	DriverObject->DriverUnload = UnloadDriver;

	KdPrint(("Entry called\n"));

	return STATUS_SUCCESS;
}
