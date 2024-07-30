#ifndef MOCK_H
#define MOCK_H

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

int is_sw_push();
int read_sw(const int port, const int bit);

#ifdef __cplusplus
}
#endif  // __cplusplus

#endif // MOCK_H

