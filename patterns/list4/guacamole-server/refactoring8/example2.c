const char* GUAC_CLIENT_ARGS[] = {
    "hostname",
    "port",
    "domain",
    "username",
    "password",
    "width",
    "height",
    "dpi",
    "initial-program",
    "color-depth",
    "disable-audio",
    "enable-printing",
    "enable-drive",
    "drive-path",
    "create-drive-path",
    "console",
    "console-audio",
    "server-layout",
    "security",
    "ignore-cert",
    "disable-auth",
    "remote-app",
    "remote-app-dir",
    "remote-app-args",
    "static-channels",
    "client-name",
    "enable-wallpaper",
    "enable-theming",
    "enable-font-smoothing",
    "enable-full-window-drag",
    "enable-desktop-composition",
    "enable-menu-animations",
    "preconnection-id",
    "preconnection-blob",

#ifdef ENABLE_COMMON_SSH
    "enable-sftp",
    "sftp-hostname",
    "sftp-port",
    "sftp-username",
    "sftp-password",
    "sftp-private-key",
    "sftp-passphrase",
    "sftp-directory",
#endif

    NULL
};
