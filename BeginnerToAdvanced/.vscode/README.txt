For the "c_cpp_properties.json" file:
    I only changed the "cStandard" and "cppStandard" attributes. 
    The "includePath" attribute has to do with which files/folders to apply the properties to.
    "${workspaceFolder}/**" means that the properties are appied to the current root folder and all other branching pathways.

For the tasks.json:
    I changed the "${workspaceFolder}\\*.cpp" to "${fileDirname}\\*.cpp".
        This made it so that all files in the "fileDirname" directory/folder are compiled into seperate obj files, then combined into a single executable file. 
    I then changed "${fileDirname}\\*.cpp" to "${file}", which then only compiles the current file.

    I changed the "${fileDirname}\\rooster.exe" to "${workspaceFolder}\\recent.exe" so that the executable file is created and placed on the current root folder
