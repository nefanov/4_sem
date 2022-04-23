Structure of CMAKE rules configuring for cross-OS project
```
if (APPLE)
    if (IOS)
        # iOS version of your install rules
    else()
        # MacOS version of your install rules
    endif()
elseif (WIN32)
    # Windows version of your install rules
else()
    if (ANDROID)
        # Android version of your install rules
    else()
         # Linux version of your install rules
    endif()
endif()
```

good example:
https://github.com/juce-framework/JUCE
