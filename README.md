# WDM template

This project is a wdm driver template for Windows, with a customized GitHub Actions build.

The result of the build is two archives, debug and release. The build occurs with each push. These archives are pinned as build artifacts.

## Launch (this is for beginners)

I strongly recommend using a virtual machine.

### Preparation:

1. Download [DebugView](https://learn.microsoft.com/ru-ru/sysinternals/downloads/debugview) and transfer to virtual machine. To see the driver output, run it as administrator. And set the Capture > Capture Kernel checkbox.

2. Switch the system to test signature mode:

```powershell
bcdedit /set testsigning on 
```

### Create driver:

Open powershell with administrator privileges.

```powershell
sc.exe create driver type= kernel binPath= c:\path\to\driver\driver.sys
```

Afrter that you can find driver in RegistryEditor.

  ![RegistryEditor](https://github.com/user-attachments/assets/c6b471b9-a35c-4371-be7d-3d39c15cea96)

### Start driver:

```powershell
sc.exe start driver
```

If everything works as it should, you will see the output.

![DebugView_Entry](https://github.com/user-attachments/assets/236a7029-f4a5-4025-9028-3a5956719256)

### Stop driver:

```powershell
sc.exe stop driver
```

Completion result.

![DebugView_Unload](https://github.com/user-attachments/assets/4f33e9f8-492b-44c6-8c9c-663d674f9c72)
