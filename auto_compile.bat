@echo off
for /d %%g in (*) do (
	@echo off
	chdir %%g
	copy ..\CMakeLists.txt .\

	mkdir py

	echo
	echo
	echo ########################## %%g SWIG2Python ##########################
	swig -threads -c++ -python -outdir py -outcurrentdir ..\..\thosttraderapi.i
	swig -threads -c++ -python -outdir py -outcurrentdir ..\..\thostmduserapi.i

	mkdir build
	chdir build

	mkdir ..\py\py37
	echo
	echo
	echo ########################## %%g Compile 37 ##########################
	cmake .. -DPY_VER="3.7.9" -DPY_LIB=37
	cmake --build . --config Release --clean-first
	copy Release\_thosttraderapi.dll ..\py\py37\_thosttraderapi.pyd
	copy Release\_thostmduserapi.dll ..\py\py37\_thostmduserapi.pyd

	mkdir ..\py\py38
	echo
	echo
	echo ########################## %%g Compile 38 ##########################
	cmake .. -DPY_VER="3.8.10" -DPY_LIB=38
	cmake --build . --config Release --clean-first
	copy Release\_thosttraderapi.dll ..\py\py38\_thosttraderapi.pyd
	copy Release\_thostmduserapi.dll ..\py\py38\_thostmduserapi.pyd

	mkdir ..\py\py39
	echo
	echo
	echo ########################## %%g Compile 39 ##########################
	cmake .. -DPY_VER="3.9.12" -DPY_LIB=39
	cmake --build . --config Release --clean-first
	copy Release\_thosttraderapi.dll ..\py\py39\_thosttraderapi.pyd
	copy Release\_thostmduserapi.dll ..\py\py39\_thostmduserapi.pyd




	chdir ..
	rmdir /s /q build
	del *_wrap.* CMakeLists.txt
	chdir ..
)

pause
