let fs = require('fs');
let path = require('path');
let project = new Project('BonsaiGame');
project.version = '1.0';
project.addDefine('HXCPP_API_LEVEL=400');
project.addDefine('HXCPP_DEBUG', 'Debug');
project.addDefine('HXCPP_GC_GENERATIONAL');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{},"xboxOne":{},"playStation4":{},"switch":{}};
project.setDebugDir('build/windows');
await project.addProject('build/windows-build');
await project.addProject('C:/Users/jorda/Projects/GGJ20/kha');
if (fs.existsSync(path.join('Libraries/zui', 'kincfile.js')) || fs.existsSync(path.join('Libraries/zui', 'korefile.js'))) {
	await project.addProject('Libraries/zui');
}
if (fs.existsSync(path.join('Libraries/differ', 'kincfile.js')) || fs.existsSync(path.join('Libraries/differ', 'korefile.js'))) {
	await project.addProject('Libraries/differ');
}
if (fs.existsSync(path.join('Libraries/hxNoise', 'kincfile.js')) || fs.existsSync(path.join('Libraries/hxNoise', 'korefile.js'))) {
	await project.addProject('Libraries/hxNoise');
}
if (fs.existsSync(path.join('Libraries/hotml', 'kincfile.js')) || fs.existsSync(path.join('Libraries/hotml', 'korefile.js'))) {
	await project.addProject('Libraries/hotml');
}
resolve(project);
