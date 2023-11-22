For the c_cpp_properties.json, I only changed the cStandard and cppStandard attributes. The includePath attribute has to do with which files/folders to apply the properties to.
    "${workspaceFolder}/**" means that the properties are appied to the current root folder and all other branching pathways.

For the tasks.json, I changed the workspaceFolder to fileDirname, so that the compiler only compiles the current file and so that the only file that the compiler needs to access is the current file. 