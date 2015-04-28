void control_set_motors(signed short *m);

void control_set_lights(signed short l);
void control_set_headlights(gboolean on);
void control_set_taillights(gboolean on);
void control_set_hazardlights(gboolean on);

void control_set_flags(signed short f);
void control_get_packet(char *buf);
void control_start(void);
void control_stop(void);
