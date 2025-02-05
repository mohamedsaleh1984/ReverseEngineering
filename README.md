# Reverse-Engineering
Software Reverse Engineering

Using GDB to disassemble binary file
```
dbg <filename.o>
```
```
info functions
```
```
disassemble <functionName>
```

Using objdump to get more information about the binary

- file format
```
objdump -f <filename.o>
```

- disassemble Obj file
```
objdump -gdSC -M intel <filename.o> > <filename>.d
```
- header content
```
objdump -p <filename.o>
```
- disassemble all sections of the file
```
objdump -D <filename.o>
```
- print the content of all sections
```
objdump -s <filename.o>
```
- Extract Data Segment
```
objdump -s Project1.o > DataSegment.txt
```
