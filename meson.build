project(
    'corium',
    'cpp',
    version : '1.0.0',
    license : 'GPLv3',
    default_options : [
        'buildtype=release',
        'default_library=shared',
        'optimization=3',
        'b_lto=false',
    ]
)

cxxflags = ''

# Dependencies
opengl = dependency('opengl')
glfw = dependency('glfw3')

library( 
    'corium',
    dependencies : [opengl, glfw] 
)
