const path = require('path')
const fs = require('fs')
const {spawn} = require('child_process')
const {getAllProjects} = require('./config')

function buildProject(name, path) {
  if (step === 1) {
    console.log(name, path)
    // node-gyp build
  }
  step++
}

function copyRelease(source, target) {
  // 复制libs
}

/*
* 构建
* */
const projects = getAllProjects()
let step = 1
for (const projectName in projects) {
  buildProject(projectName, projects[projectName])
}

