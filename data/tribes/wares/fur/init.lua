push_textdomain("tribes")

dirname = path.dirname(__file__)

descriptions:new_ware_type {
   name = "fur",
   -- TRANSLATORS: This is a ware name used in lists of wares
   descname = pgettext("ware", "Fur"),
   icon = dirname .. "menu.png",

   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 6, 9 },
      },
   }
}

pop_textdomain()
