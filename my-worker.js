self.Module = {
    onRuntimeInitialized: function() {
        console.log('SUM: ' + Module.add(1, 2));
    }
};

self.importScripts("main.js");