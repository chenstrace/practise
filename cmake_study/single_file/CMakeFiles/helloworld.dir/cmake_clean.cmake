FILE(REMOVE_RECURSE
  "CMakeFiles/helloworld.dir/test.c.o"
  "helloworld.pdb"
  "helloworld"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/helloworld.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
