#ifdef FOO_EXPORT
#    define FOO_API __declspec(dllexport)
#else
#    define FOO_API __declspec(dllimport)
#endif
