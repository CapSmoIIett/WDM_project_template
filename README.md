# WDM template

This project is a wdm driver template for Windows, with a customized GitHub Actions build.

The result of the build is two archives, debug and release. The build occurs with each push. These archives are pinned as build artifacts.

## Launch (this is for beginners)

I strongly recommend using a virtual machine.

### Preparation:

1. Download [DebugView](https://learn.microsoft.com/ru-ru/sysinternals/downloads/debugview) and transfer to virtual machine. To see the driver output, run it as administrator. And set the checkbox as in the photo.

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

### Start driver:

```powershell
sc.exe start driver
```

If everything works as it should, you will see the output.

### Stop driver:

```powershell
sc.exe start driver
```

Completion result.