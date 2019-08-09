self.Module = {
    onRuntimeInitialized: function() {
        console.log('SUM: ' + Module.add(1, 2));
        var buf = Module.getBytes().slice().buffer;
        self.postMessage(buf, [buf]);
        console.log(buf);
    }
};

self.importScripts("main.js");