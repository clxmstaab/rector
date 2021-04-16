<?php

spl_autoload_register(function() {
    echo "keep on autoloading";
    exit();
    require __DIR__ . '/AutoloadedClass.php';
});

