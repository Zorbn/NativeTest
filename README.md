# NativeTest
## A test of running native code from HashLink.

### Running

HashLink will try to load the hdll from the current directory,
so run the program with the following line.
`$ cd haxeTest/bin/hl && hl main.hl`

### Building

The hdll is just a dynamic library generated by building the cmake project.
Then it is manually copied from the `build/Debug` directory to the `haxeTest/bin/hl`
directory and renamed from `nativeTest.dll` to `nativeTest.hdll`.

The `CMakeLists.txt` file needs to be modified to include the correct path
to your local hashlink installation instead of mine. It could also be modified
to copy the .dll to an .hdll in the correct directory, if you don't want to do
it manually.

### More Info
I followed the [HashLink documentation for creating native extensions](https://github.com/HaxeFoundation/hashlink/wiki/HashLink-native-extension-tutorial)
and if you're interested in this you may also like the [Haxe documentation about target-specific syntax](https://haxe.org/manual/target-syntax.html).