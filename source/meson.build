project('SimpleTodo', 'cpp')

wx_dep = dependency('wxwidgets', version: '>=3.0.0', required: true)

add_global_arguments('-fpermissive', language: 'cpp')
executable('wx-example', ['cApp.cpp', 'cApp.h', 'cMain.cpp', 'cMain.h'], dependencies: [wx_dep])
