# ctpapi2python

参考 [景色](https://github.com/nicai0609/Python-CTPAPI) 记录下 ctpapi 转换为
python

## 软件版本

- ctpapi 6.6.9
- Swig 4.1.1
- VisualStudio 2022
- python 3.10

## Swig 转 Python

```bash
swig -threads -c++ -python thosttraderapi.i
swig -threads -c++ -python thostmduserapi.i
```

生成以下文件:

- thosttraderapi.py
- thosttraderapi_wrap.h
- thosttraderapi_wrap.cxx
- thostmduserapi.py
- thostmduserapi_wrap.h
- thostmduserapi_wrap.cxx

## Windows

下载 `windows/_thosttraderapi` `windows/_thostmduserapi` 这两个vs2022项目即可直接编译

生成两个文件:

- _thosttraderapi.dll
- _thostmduserapi.dll

改名为:

- _thosttraderapi.pyd
- _thostmduserapi.pyd

## Linux