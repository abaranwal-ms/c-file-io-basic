# c-file-io-basic

Basic C programs demonstrating file I/O operations.

## Programs

- **binary-write.c** — Writes binary data (structs) to a `.bin` file using `fwrite`
- **marks-write.c** — Reads student names and marks from stdin, writes them to a text file using `fprintf`

## How to Compile & Run

### On Windows (via WSL + Ubuntu)

Install Ubuntu on WSL:
```powershell
wsl --install Ubuntu-24.04
```

Install GCC inside WSL:
```bash
sudo apt update && sudo apt install -y build-essential
```

Compile and run from WSL:
```bash
cd /mnt/c/apps/cfileop
gcc binary-write.c -o binary-write && ./binary-write
gcc marks-write.c -o marks-write && ./marks-write
```

## Output Files

Generated files are written to the `files/` directory.
