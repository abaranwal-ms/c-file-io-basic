# WSL Ubuntu Setup & C Compiler

## Install Ubuntu distro
```powershell
wsl --install Ubuntu-24.04
# restart if prompted
```

## First launch - set username/password in the Ubuntu terminal, then:
```bash
sudo apt update
sudo apt install -y build-essential
```

## Compile and run a C file from Windows path
```bash
cd /mnt/c/apps/cfileop
gcc binary-write.c -o binary-write
./binary-write
```

## Verify output
```bash
ls -l /mnt/c/apps/cfileop/files/binary.bin
```

## Notes
- `wsl --list --online` lists available distros
- Windows drives mounted at `/mnt/c/`, `/mnt/d/`, etc.
- `build-essential` includes gcc, g++, make
