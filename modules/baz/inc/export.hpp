#ifdef BAZ_EXPORT
#    define BAZ_API __declspec(dllexport)
#else
#    define BAZ_API __declspec(dllimport)
#endif
