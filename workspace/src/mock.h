#ifndef MOCK_H
#define MOCK_H

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

typedef enum Step{
  STEP_0 = 0,
  STEP_1 = 1
} eStep;

int is_sw_push();
int read_sw(const int port, const int bit);

eStep step_0(eStep current_step );
eStep step_1(eStep current_step );

#ifdef __cplusplus
}
#endif  // __cplusplus

#endif // MOCK_H

