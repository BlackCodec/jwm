/**
 * @file desktop.h
 * @author Joe Wingbermuehle
 * @date 2004-2006
 *
 * @brief Header for the desktop management functions.
 *
 */

#ifndef DESKTOP_H
#define DESKTOP_H

struct MenuType;

/*@{*/
#define InitializeDesktops()  (void)(0)
void StartupDesktops();
#define ShutdownDesktops()    (void)(0)
void DestroyDesktops();
/*@}*/

/** Switch to the desktop to the right. */
char RightDesktop();

/** Switch to the desktop to the left. */
char LeftDesktop();

/** Switch to the desktop above. */
char AboveDesktop();

/** Switch to the desktop below. */
char BelowDesktop();

/** Switch to a specific desktop.
 * @param desktop The desktop to show (0 based).
 */
void ChangeDesktop(unsigned int desktop);

/** Toggle the "show desktop" state.
 * This will either minimize or restore all items on the current desktop.
 */
void ShowDesktop();

/** Create a menu containing a list of desktops.
 * @param mask A bit mask of desktops to highlight.
 * @return A menu containing all the desktops.
 */
struct Menu *CreateDesktopMenu(unsigned int mask);

/** Set the name of a desktop.
 * This is called before startup.
 * @param desktop The desktop to name (0 based).
 * @param str The name to assign.
 */
void SetDesktopName(unsigned int desktop, const char *str);

/** Get the name of a desktop.
 * @param desktop The desktop (0 based).
 * @return The name of the desktop.
 */
const char *GetDesktopName(unsigned int desktop);

#endif

