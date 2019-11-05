# About

Custom generator (uses Cling)

Using custom generator you can:

- output any file format (for example: valid `.html` file).
- add predefined variables.

## Usage

```bash
./build/bin/CXTPL_tool --input_files build/file1.cxtpl --output_files build/file1.cxtpl.generated.cpp -L ".=DBG9" --generator_path=examples/text_generator/text_generator.cpp
```
