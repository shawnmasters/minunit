#ifndef __MINUNITH__
#define __MINUNITH__

#define mu_assert(_msg, _test) do { subtests_run++; if (!(_test)) return _msg; } while(0)
#define mu_run_test(_test) do { char *_msg = _test(); tests_run++; \
                               if (_msg) return _msg; } while (0)

extern int tests_run;
extern int subtests_run;

#endif /* __MINUNITH__ */