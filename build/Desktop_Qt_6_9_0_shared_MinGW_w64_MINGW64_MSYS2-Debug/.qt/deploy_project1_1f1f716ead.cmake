include("C:/msys64/mingw64/share/licenses/qt6-tools/project1/build/Desktop_Qt_6_9_0_shared_MinGW_w64_MINGW64_MSYS2-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/project1-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE C:/msys64/mingw64/share/licenses/qt6-tools/project1/build/Desktop_Qt_6_9_0_shared_MinGW_w64_MINGW64_MSYS2-Debug/project1.exe
    GENERATE_QT_CONF
)
