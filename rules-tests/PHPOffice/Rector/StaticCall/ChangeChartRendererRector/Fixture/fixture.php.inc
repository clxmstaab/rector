<?php

namespace Rector\Tests\PHPOffice\Rector\StaticCall\ChangeChartRendererRector\Fixture;

final class Fixture
{
    public function run(): void
    {
        \PHPExcel_Settings::setChartRenderer($rendererName, $rendererLibraryPath);
    }
}

?>
-----
<?php

namespace Rector\Tests\PHPOffice\Rector\StaticCall\ChangeChartRendererRector\Fixture;

final class Fixture
{
    public function run(): void
    {
        \PHPExcel_Settings::setChartRenderer(\PhpOffice\PhpSpreadsheet\Chart\Renderer\JpGraph::class);
    }
}

?>
