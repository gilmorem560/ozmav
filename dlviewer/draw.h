extern void gl_Perspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
extern void gl_LookAt(const GLdouble p_EyeX, const GLdouble p_EyeY, const GLdouble p_EyeZ, const GLdouble p_CenterX, const GLdouble p_CenterY, const GLdouble p_CenterZ);
extern void gl_SetupScene2D(int Width, int Height);
extern void gl_SetupScene3D(int Width, int Height);
extern void gl_CreateSceneDLists();
extern void gl_DrawScene();
extern void gl_DrawHUD();
extern void gl_CreateViewerDLists();
extern int gl_FinishScene();
