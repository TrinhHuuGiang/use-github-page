To make the file easier to read and avoid editing a large file,  
`mkdocs.yml` is split into two parts: 
- `_1_mkdocs_base.yml` and `_2_nav.yml`.

---

If `_2_nav.yml` contains many smaller items and requires more  
levels of management, you can create `_2_00i_nav_title` or `_2_0i_nav_title`...

--- 

The last one, to combine the parts into `mkdocs.yml`, we use the 
following these step:

1. Build (only once): 
    - `gcc -o ./mkdocs_cat.run ./mkdocs_c_tools/mkdocs_cat.c`
    - After this step we has `mkdocs_cat.run` in the same `README.md` folder.

2. Run test Cat mkdocs program:
    - The files need to be arranged in order of content from top to bottom.
    - can type `./mkdocs_cat.run` to see the syntax
    ```bash
        ./mkdocs_cat.run [output_file] [input1] [input2 ...]
    ```

3. Concatenate all `*.yml` wrote into `mkdocs.yml`
``` bash
# BASH
./mkdocs_cat.run "../mkdocs.yml"    \
"_1_mkdocs_base.yml"                \
"_2_nav.yml"
```
``` cmd
:: cmd (window)

./mkdocs_cat.run "../mkdocs.yml"    ^
"_1_mkdocs_base.yml"                ^
"_2_nav.yml"
```
``` powershell
# powershell (window)
./mkdocs_cat.run "../mkdocs.yml"    `
"_1_mkdocs_base.yml"                `
"_2_nav.yml"
```

4. Last one, check the `mkdocs.yml` at root of repository before `mkdocs verse` or `mkdocs build` 