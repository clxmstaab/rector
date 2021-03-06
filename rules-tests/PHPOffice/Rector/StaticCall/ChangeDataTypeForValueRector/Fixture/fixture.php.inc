<?php

namespace Rector\Tests\PHPOffice\Rector\StaticCall\ChangeDataTypeForValueRector\Fixture;

final class Fixture
{
    public function run(): void
    {
        $type = \PHPExcel_Cell_DataType::dataTypeForValue('value');
    }
}

?>
-----
<?php

namespace Rector\Tests\PHPOffice\Rector\StaticCall\ChangeDataTypeForValueRector\Fixture;

final class Fixture
{
    public function run(): void
    {
        $type = \PhpOffice\PhpSpreadsheet\Cell\DefaultValueBinder::dataTypeForValue('value');
    }
}

?>
