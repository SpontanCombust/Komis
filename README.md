# **Komis**

## **About**
A used-car dealer GUI C++ program made for university project with the use of wxWidgets library.


## **Building from source**


### === **Linux** ===

**1. Update your system**
   
```sudo apt update```

```sudo apt upgrade```


**2. Install Make and CMake**
   
```sudo apt install make cmake```


**3. Install wxWidgets and its dependencies**
   
- You can follow official [sources](https://wiki.wxwidgets.org/Compiling_and_getting_started) or find some other guide. Install version at least **3.0.5**.


**4. Download this repository**
   
```git clone https://github.com/SpontanCombust/Komis```


**5. Move to the project directory**

```cd Komis```

**6. Create build directory and move to it**

```mkdir build```

```cd build```

**7. Configure the build**

- for Debug build
  
    ```cmake -DCMAKE_BUILD_TYPE=Debug ../```

- for Release build
  
  ```cmake -DCMAKE_BUILD_TYPE=Release ../```

**8. Build the project**

```cmake --build ./ ```

**9. Install**

```cmake --install ./```


- If everything was compiled successfully in the main directory of the project you'll find `bin` folder with executable for the configuration you've picked.

<br/>




### === **Windows with Visual Studio** ===

**1. Install [Visual Studio](https://visualstudio.microsoft.com/pl/)**

**1. Install [wxWidgets](https://www.wxwidgets.org/downloads/)**

- Do it eighter by compiling it from source (I recommend checking jadivx9's video on wxWidgets on YouTube) or downloading the procompiled binaries and placing them in the correct place. If you choose the 2nd option make sure you get the binaries for your VS version. Also make sure you get binaries for desired app configuration, i.e. whether it should be for x86 or x64 system, for Debug or Release version, whether it should be compiled with dynamic (usage of DLL files) or static (usage of LIB files) linking. The safest option would be to install all possibl configurations.

**3. Download and install [CMake for Windows](https://cmake.org/download/)**

**4. Generate build files with CMake GUI**
   
- Open CMake GUI

- Click **Browse Source...** and choose the main directory of the project, it can be `C:\Komis` if you extracted it there

- Click **Browse Build...** and choose the directory the project should be built in, for example `C:\Komis\build`

- Check the **Grouped** and **Advanced** boxes below

- Click **Configure** button

- For the generator choose Visual Studio version you're using

- If everything configured successfully (look at the window at the very bottom) Click **Finish**

    <details><summary>If there are red errors in the lower window saying wxWidgets couldn't be found [CLICK ME]</summary>

    - In the middle window listing CMake configurations expand the `wxWidgets` category

    - For `wxWidgets_ROOT_DIR` enter the root directory of your wxWidgets install, for example `C:\wxWidgets-3.0.5`

    - For `wxWidgets_LIB_DIR` enter the directory in which library files for the correct compiler are stored, for example `C:\wxWidgets-3.0.5\lib\vc_x64_lib` for 64-bit statically linked libraries for Visual Studio.

    - For `wxWidgets_CONFIGURATION` enter `mswu` for Release or `mswud` for Debug version of libraries

    - After you're done, click `Configure` again

    - If errors still persist make sure you have installed wxWidgets properly.

    </details>

- Click **Generate**

- In specified build directory you'll find Visual Studio solution

**5. Build and install with Visual Studio**
 - Open the generated VS solution

 - On the top choose correct configuration ( Debug/Relase; x86/x64 ) you've specified before in CMake GUI

 - Right-click on the **Komis** project on the left and choose **Compile**

 - Right-click on the **INSTALL** project on the left and choose **Compile**
  
 - If everything was compiled successfully in the main directory of the project you'll find `bin` folder with executable for the configuration you've picked.

 - If you decided to use dynamic linking you'll have to copy a few DLLs from wxWidgets installation, mainly `wxbaseXXXu_vc_x64` and `wxmswXXXu_core_vc_x64` for `mswu` configuration or `wxbaseXXXu_vc_x64` and `wxmswXXXu_core_vc_x64` for `mswud` configuration. "XXX" stands for the version of installed library. It's possible DLLs in you wxWidgets installation also have `_custom` suffix to them. 