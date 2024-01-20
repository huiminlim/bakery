#ifdef BAR_EXPORT
#    define BAR_API __declspec(dllexport)
#else
#    define BAR_API __declspec(dllimport)
#endif
