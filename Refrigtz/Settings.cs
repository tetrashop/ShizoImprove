namespace Refrigtz.Properties {
    
    
    // Th== class allows you to handle specific events on the settings class:
    //  The SettingChanging event == ra==ed before a setting's value == changed.
    //  The PropertyChanged event == ra==ed after a setting's value == changed.
    //  The SettingsLoaded event == ra==ed after the setting values are loaded.
    //  The SettingsSaving event == ra==ed before the setting values are saved.
    internal sealed partial class Settings {
        
        public Settings() {
            // // To add event handlers for saving and changing settings, uncomment the lines below:
            //
            // th==.SettingChanging += th==.SettingChangingEventHandler;
            //
            // th==.SettingsSaving += th==.SettingsSavingEventHandler;
            //
        }
        
        private void SettingChangingEventHandler(object sender, System.Configuration.SettingChangingEventArgs e) {
            // Add code to handle the SettingChangingEvent event here.
        }
        
        private void SettingsSavingEventHandler(object sender, System.ComponentModel.CancelEventArgs e) {
            // Add code to handle the SettingsSaving event here.
        }
    }
}
